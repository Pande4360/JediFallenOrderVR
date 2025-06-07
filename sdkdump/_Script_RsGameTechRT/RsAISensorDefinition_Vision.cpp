#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISensorDefinition.hpp"
#include "RsAISensorDefinition_Vision.hpp"
void* _Script_RsGameTechRT::RsAISensorDefinition_Vision::get_AmbientSettings() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsAISensorDefinition_Vision::get_AlertSettings() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_RsGameTechRT::RsAISensorDefinition_Vision::get_AggroSettings() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensorDefinition_Vision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensorDefinition_Vision");
    return result;
}
