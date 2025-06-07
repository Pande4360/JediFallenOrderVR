#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "BlendSample.hpp"
_Script_Engine::AnimSequence*& _Script_Engine::BlendSample::get_Animation() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BlendSample::get_SampleValue() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::BlendSample::get_RateScale() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::BlendSample::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlendSample");
    return result;
}
