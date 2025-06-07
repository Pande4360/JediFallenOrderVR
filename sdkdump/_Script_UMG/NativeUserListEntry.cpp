#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NativeUserListEntry.hpp"
_Script_CoreUObject::Class* _Script_UMG::NativeUserListEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.NativeUserListEntry");
    return result;
}
bool _Script_UMG::NativeUserListEntry::IsListItemSelected() {
    return;
}
bool _Script_UMG::NativeUserListEntry::IsListItemExpanded() {
    return;
}
