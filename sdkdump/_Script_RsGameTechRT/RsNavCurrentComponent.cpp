#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsNavCurrentComponent.hpp"
void* _Script_RsGameTechRT::RsNavCurrentComponent::get_Direction() {
    return (void*)((uintptr_t)this + 0x170);
}
float& _Script_RsGameTechRT::RsNavCurrentComponent::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x17c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNavCurrentComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNavCurrentComponent");
    return result;
}
