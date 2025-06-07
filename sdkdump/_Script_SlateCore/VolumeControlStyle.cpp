#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "VolumeControlStyle.hpp"
void* _Script_SlateCore::VolumeControlStyle::get_LowVolumeImage() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_SlateCore::VolumeControlStyle::get_SliderStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::VolumeControlStyle::get_HighVolumeImage() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Script_SlateCore::VolumeControlStyle::get_NoVolumeImage() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void* _Script_SlateCore::VolumeControlStyle::get_MidVolumeImage() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_SlateCore::VolumeControlStyle::get_MutedImage() {
    return (void*)((uintptr_t)this + 0x568);
}
_Script_CoreUObject::Class* _Script_SlateCore::VolumeControlStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.VolumeControlStyle");
    return result;
}
