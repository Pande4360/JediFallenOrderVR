#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloat.hpp"
#include "RawDistribution.hpp"
#include "RawDistributionFloat.hpp"
_Script_CoreUObject::Class* _Script_Engine::RawDistributionFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RawDistributionFloat");
    return result;
}
float& _Script_Engine::RawDistributionFloat::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::RawDistributionFloat::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_Engine::DistributionFloat*& _Script_Engine::RawDistributionFloat::get_Distribution() {
    return *(_Script_Engine::DistributionFloat**)((uintptr_t)this + 0x30);
}
