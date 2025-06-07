#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVectorParameterBase.hpp"
#include "DistributionVectorParticleParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::DistributionVectorParticleParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionVectorParticleParameter");
    return result;
}
