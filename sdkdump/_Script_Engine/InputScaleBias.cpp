#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputScaleBias.hpp"
float& _Script_Engine::InputScaleBias::get_Scale() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::InputScaleBias::get_Bias() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::InputScaleBias::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InputScaleBias");
    return result;
}
