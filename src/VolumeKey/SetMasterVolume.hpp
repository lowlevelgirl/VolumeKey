void SetMasterVolume(string value, float currentVolumeLevel) {
    CoInitialize(NULL);

    IMMDeviceEnumerator* deviceEnumerator = NULL;
    HRESULT hr = CoCreateInstance(
        __uuidof(MMDeviceEnumerator),
        NULL,
        CLSCTX_ALL,
        __uuidof(IMMDeviceEnumerator),
        (void**)&deviceEnumerator
    );

    if (SUCCEEDED(hr)) {
        IMMDevice* device = NULL;
        hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eMultimedia, &device);
        
        if (SUCCEEDED(hr)) {
            IAudioEndpointVolume* endpointVolume = NULL;
            hr = device->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_ALL, NULL, (void**)&endpointVolume);
            if (SUCCEEDED(hr)) {
            	if (value == "plus") {
            		hr = endpointVolume->SetMasterVolumeLevelScalar(currentVolumeLevel + speed, NULL);
				} else if (value == "minus") {
					hr = endpointVolume->SetMasterVolumeLevelScalar(currentVolumeLevel - speed, NULL);
				} else if (value == "mute") {
					hr = endpointVolume->SetMasterVolumeLevelScalar(0.0, NULL);
				}
                endpointVolume->Release();
            }
    	}
        deviceEnumerator->Release();
    }
    
    CoUninitialize();
}
