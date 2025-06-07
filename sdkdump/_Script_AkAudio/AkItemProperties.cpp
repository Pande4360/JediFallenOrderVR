#include "..\FUObjectArray.hpp"
#include "AkItemProperties.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Widget.hpp"
void* _Script_AkAudio::AkItemProperties::get_OnSelectionChanged() {
    return (void*)((uintptr_t)this + 0x100);
}
void _Script_AkAudio::AkItemProperties::SetSearchText(void* newText) {
    return;
}
_Script_CoreUObject::Class* _Script_AkAudio::AkItemProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkItemProperties");
    return result;
}
void* _Script_AkAudio::AkItemProperties::get_OnPropertyDragged() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_AkAudio::AkItemProperties::GetSelectedProperty() {
    return;
}
void* _Script_AkAudio::AkItemProperties::GetSearchText() {
    return;
}
