#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MediaBlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MediaAssets::MediaBlueprintFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaBlueprintFunctionLibrary");
    return result;
}
void _Script_MediaAssets::MediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(void*& OutDevices, int32_t Filter) {
    return;
}
void _Script_MediaAssets::MediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(void*& OutDevices, int32_t Filter) {
    return;
}
void _Script_MediaAssets::MediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(void*& OutDevices, int32_t Filter) {
    return;
}
