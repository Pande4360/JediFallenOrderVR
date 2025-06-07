#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimInstance.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstFloatAnimBPParam.hpp"
_Script_Engine::AnimInstance*& _Script_Engine::InterpTrackInstFloatAnimBPParam::get_AnimScriptInstance() {
    return *(_Script_Engine::AnimInstance**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstFloatAnimBPParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstFloatAnimBPParam");
    return result;
}
float& _Script_Engine::InterpTrackInstFloatAnimBPParam::get_ResetFloat() {
    return *(float*)((uintptr_t)this + 0x30);
}
