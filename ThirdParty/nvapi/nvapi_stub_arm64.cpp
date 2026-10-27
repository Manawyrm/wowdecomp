// NVIDIA ships no ARM64 NVAPI library. The client only uses it for 3D Vision stereo, so on ARM64 every call reports
// that the library is missing, which the D3D devices treat like a machine without an NVIDIA driver.

#include <cstring>
#include <windows.h>
#include <d3d9.h> // nvapi.h declares the D3D stereo functions only after d3d9.h
#include "ThirdParty/nvapi/nvapi.h"

NvAPI_Status __cdecl NvAPI_Initialize() {
    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_GetErrorMessage(NvAPI_Status nr, NvAPI_ShortString szDesc) {
    strcpy_s(szDesc, NVAPI_SHORT_STRING_MAX, "NVAPI is not available on ARM64");
    return NVAPI_OK;
}

NvAPI_Status __cdecl NvAPI_Stereo_Enable() {
    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_Stereo_Disable() {
    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_Stereo_IsEnabled(NvU8* pIsStereoEnabled) {
    if (pIsStereoEnabled) {
        *pIsStereoEnabled = 0;
    }

    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_Stereo_CreateConfigurationProfileRegistryKey(NV_STEREO_REGISTRY_PROFILE_TYPE registryProfileType) {
    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_Stereo_CreateHandleFromIUnknown(IUnknown* pDevice, StereoHandle* pStereoHandle) {
    if (pStereoHandle) {
        *pStereoHandle = nullptr;
    }

    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_Stereo_DestroyHandle(StereoHandle stereoHandle) {
    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_Stereo_SetConvergence(StereoHandle stereoHandle, float newConvergence) {
    return NVAPI_LIBRARY_NOT_FOUND;
}

NvAPI_Status __cdecl NvAPI_Stereo_SetSeparation(StereoHandle stereoHandle, float newSeparationPercentage) {
    return NVAPI_LIBRARY_NOT_FOUND;
}
