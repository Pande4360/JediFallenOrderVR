#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "WeightedBlendable.hpp"
float& _Script_Engine::WeightedBlendable::get_Weight() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_Engine::WeightedBlendable::get_Object() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::WeightedBlendable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WeightedBlendable");
    return result;
}
