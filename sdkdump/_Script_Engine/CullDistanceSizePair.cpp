#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CullDistanceSizePair.hpp"
float& _Script_Engine::CullDistanceSizePair::get_Size() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CullDistanceSizePair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CullDistanceSizePair");
    return result;
}
float& _Script_Engine::CullDistanceSizePair::get_CullDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
