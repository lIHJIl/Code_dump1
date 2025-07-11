using UnityEngine;

public class DaySimuForDirLight : MonoBehaviour
{
    [Header("Time Settings")]
    [Tooltip("The speed at which the day progresses. Higher values mean a faster day.")]
    public float daySpeed = 1f;
    [Tooltip("The current time of day (0.0 to 1.0). 0.0 is midnight, 0.25 is sunrise, 0.5 is midday, 0.75 is sunset.")]
    [Range(0f, 1f)]
    public float currentTime = 0f;
    // when hover over public var in inspector that tooltip of that var shows up!

    [Header("Light Settings")]
    [Tooltip("The intensity of the light at midday.")]
    public float middayIntensity = 1f;
    [Tooltip("The intensity of the light at night.")]
    public float nightIntensity = 0.1f;
    [Tooltip("The color of the light at sunrise/sunset.")]
    public Color sunriseSunsetColor = new Color(1f, 0.7f, 0.4f); // Orange-ish
    [Tooltip("The color of the light at midday.")]
    public Color middayColor = Color.white;
    [Tooltip("The color of the light at night.")]
    public Color nightColor = new Color(0.1f, 0.1f, 0.2f); // Dark blue-ish

    private Light directionalLight;

    void Start()
    {
        directionalLight = GetComponent<Light>();
        if (directionalLight == null || directionalLight.type != LightType.Directional)
        {
            Debug.LogError("This script should be attached to a Directional Light.");
            enabled = false; // Disable the script if not attached to a directional light
        }
    }

    void Update()
    {
        // Update the current time
        currentTime += Time.deltaTime * daySpeed / 60f; // Divide by 60 to represent minutes in a day (adjust as needed)
        if (currentTime > 1f)
        {
            currentTime -= 1f; // Wrap around to the beginning of the day
        }

        // Calculate the rotation of the light
        float sunAngle = currentTime * 360f - 90f; // Start at sunrise (around 0.25 * 360 - 90 = 0)
        transform.rotation = Quaternion.Euler(sunAngle, 170f, 0f); // Adjust Y and Z for desired initial orientation

        // Update light intensity
        UpdateLightIntensity();

        // Update light color
        UpdateLightColor();
    }

    void UpdateLightIntensity()
    {
        float intensityMultiplier = 1f;

        if (currentTime <= 0.25f || currentTime >= 0.75f)
        {
            // Night to sunrise, or sunset to night
            float timeSinceMidnightOrSunset = (currentTime <= 0.25f) ? currentTime : currentTime - 0.75f;
            float blendFactor = Mathf.Clamp01(timeSinceMidnightOrSunset * 4f); // Smooth transition over 1/4 of the cycle

            if (currentTime <= 0.25f)
            {
                intensityMultiplier = Mathf.Lerp(nightIntensity, middayIntensity, blendFactor);
            }
            else
            {
                intensityMultiplier = Mathf.Lerp(middayIntensity, nightIntensity, blendFactor);
            }
        }
        else if (currentTime > 0.25f && currentTime < 0.75f)
        {
            // Daytime
            intensityMultiplier = middayIntensity;
        }

        directionalLight.intensity = intensityMultiplier;
    }

    void UpdateLightColor()
    {
        if (currentTime <= 0.25f || currentTime >= 0.75f)
        {
            // Sunrise/Sunset
            float timeSinceMidnightOrSunset = (currentTime <= 0.25f) ? currentTime : currentTime - 0.75f;
            float blendFactor = Mathf.Clamp01(timeSinceMidnightOrSunset * 4f);

            if (currentTime <= 0.25f)
            {
                directionalLight.color = Color.Lerp(nightColor, sunriseSunsetColor, blendFactor);
            }
            else
            {
                directionalLight.color = Color.Lerp(sunriseSunsetColor, nightColor, blendFactor);
            }
        }
        else if (currentTime > 0.25f && currentTime < 0.75f)
        {
            // Midday
            directionalLight.color = middayColor;
        }
    }
}