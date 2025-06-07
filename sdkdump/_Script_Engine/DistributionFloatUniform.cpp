#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "DistributionFloatUniform.hpp"
float& _Script_Engine::DistributionFloatUniform::get_Min() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::DistributionFloatUniform::get_Max() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionFloatUniform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionFloatUniform");
    return result;
}
