#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BAFTAEventDataSet.hpp"
void* _Script_RsGameTechRT::BAFTAEventDataSet::get_TagListsToDialogues() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::BAFTAEventDataSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.BAFTAEventDataSet");
    return result;
}
