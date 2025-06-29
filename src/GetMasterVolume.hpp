float GetMasterVolume() {
    CoInitialize(NULL);

    IMMDeviceEnumerator* deviceEnumerator = NULL;
    HRESULT hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), (void**)&deviceEnumerator);
    
    if (SUCCEEDED(hr)) {
        IMMDevice* defaultDevice = NULL;
        hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eMultimedia, &defaultDevice);
        
        if (SUCCEEDED(hr)) {
            IAudioEndpointVolume* endpointVolume = NULL;
            hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_ALL, NULL, (void**)&endpointVolume);
            
            if (SUCCEEDED(hr)) {
                float volumeLevel;
                hr = endpointVolume->GetMasterVolumeLevelScalar(&volumeLevel);
                endpointVolume->Release();
                
                return volumeLevel;
            }
            defaultDevice->Release();
        }
        deviceEnumerator->Release();
    }
    
    CoUninitialize();
    return 0.0;
}
