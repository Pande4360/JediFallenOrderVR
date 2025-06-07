#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloatParameterBase.hpp"
#include "DistributionFloatParticleParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::DistributionFloatParticleParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionFloatParticleParameter");
    return result;
}
