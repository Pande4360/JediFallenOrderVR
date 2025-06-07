#include "..\FUObjectArray.hpp"
#include "AkWwiseTreeSelector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Widget.hpp"
void* _Script_AkAudio::AkWwiseTreeSelector::get_OnSelectionChanged() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AkAudio::AkWwiseTreeSelector::get_OnItemDragged() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkWwiseTreeSelector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkWwiseTreeSelector");
    return result;
}
