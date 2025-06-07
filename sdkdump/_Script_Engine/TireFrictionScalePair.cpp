#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TireFrictionScalePair.hpp"
#include "TireType.hpp"
_Script_Engine::TireType*& _Script_Engine::TireFrictionScalePair::get_TireType() {
    return *(_Script_Engine::TireType**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::TireFrictionScalePair::get_FrictionScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::TireFrictionScalePair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TireFrictionScalePair");
    return result;
}
