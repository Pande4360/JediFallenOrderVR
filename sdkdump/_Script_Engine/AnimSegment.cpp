#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSegment.hpp"
#include "AnimationAsset.hpp"
_Script_Engine::AnimationAsset*& _Script_Engine::AnimSegment::get_AnimReference() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::AnimSegment::get_StartPos() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSegment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSegment");
    return result;
}
float& _Script_Engine::AnimSegment::get_AnimStartTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::AnimSegment::get_AnimEndTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::AnimSegment::get_AnimPlayRate() {
    return *(float*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::AnimSegment::get_LoopingCount() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
