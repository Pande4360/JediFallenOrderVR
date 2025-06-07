#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBitfield_RsIkBoneTypes.hpp"
void* _Script_RsGameTechRT::RsBitfield_RsIkBoneTypes::get_Bits() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBitfield_RsIkBoneTypes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsBitfield_RsIkBoneTypes");
    return result;
}
