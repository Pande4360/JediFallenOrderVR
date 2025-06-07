#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistanceDatum.hpp"
float& _Script_Engine::DistanceDatum::get_FadeOutDistanceEnd() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::DistanceDatum::get_FadeInDistanceStart() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::DistanceDatum::get_FadeInDistanceEnd() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::DistanceDatum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DistanceDatum");
    return result;
}
float& _Script_Engine::DistanceDatum::get_FadeOutDistanceStart() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::DistanceDatum::get_Volume() {
    return *(float*)((uintptr_t)this + 0x10);
}
