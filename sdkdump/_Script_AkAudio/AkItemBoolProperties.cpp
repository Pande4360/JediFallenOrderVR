#include "..\FUObjectArray.hpp"
#include "AkItemBoolProperties.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Widget.hpp"
void* _Script_AkAudio::AkItemBoolProperties::get_OnSelectionChanged() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AkAudio::AkItemBoolProperties::GetSearchText() {
    return;
}
void* _Script_AkAudio::AkItemBoolProperties::get_OnPropertyDragged() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_AkAudio::AkItemBoolProperties::GetSelectedProperty() {
    return;
}
_Script_CoreUObject::Class* _Script_AkAudio::AkItemBoolProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkItemBoolProperties");
    return result;
}
void _Script_AkAudio::AkItemBoolProperties::SetSearchText(void* newText) {
    return;
}
