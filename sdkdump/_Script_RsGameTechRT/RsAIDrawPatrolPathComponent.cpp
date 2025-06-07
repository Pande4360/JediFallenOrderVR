#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "RsAIDrawPatrolPathComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIDrawPatrolPathComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIDrawPatrolPathComponent");
    return result;
}
