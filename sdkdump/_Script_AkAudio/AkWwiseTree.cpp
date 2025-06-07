#include "..\FUObjectArray.hpp"
#include "AkWwiseObjectDetails.hpp"
#include "AkWwiseTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Widget.hpp"
_Script_AkAudio::AkWwiseObjectDetails _Script_AkAudio::AkWwiseTree::GetSelectedItem() {
    return;
}
void* _Script_AkAudio::AkWwiseTree::get_OnSelectionChanged() {
    return (void*)((uintptr_t)this + 0x100);
}
void _Script_AkAudio::AkWwiseTree::SetSearchText(void* newText) {
    return;
}
void* _Script_AkAudio::AkWwiseTree::get_OnItemDragged() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkWwiseTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkWwiseTree");
    return result;
}
void* _Script_AkAudio::AkWwiseTree::GetSearchText() {
    return;
}
