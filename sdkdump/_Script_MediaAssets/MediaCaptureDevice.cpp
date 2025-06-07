#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaCaptureDevice.hpp"
void* _Script_MediaAssets::MediaCaptureDevice::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MediaAssets::MediaCaptureDevice::get_URL() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaCaptureDevice::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaAssets.MediaCaptureDevice");
    return result;
}
