#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequenceBase.hpp"
#include "AnimationAsset.hpp"
void* _Script_Engine::AnimSequenceBase::get_Notifies() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_Engine::AnimSequenceBase::get_SequenceLength() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::AnimSequenceBase::get_RawCurveData() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_Engine::AnimSequenceBase::get_RateScale() {
    return *(float*)((uintptr_t)this + 0x94);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSequenceBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimSequenceBase");
    return result;
}
float _Script_Engine::AnimSequenceBase::GetPlayLength() {
    return;
}
