#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFloatAnimBPParam.hpp"
#include "InterpTrackFloatBase.hpp"
void* _Script_Engine::InterpTrackFloatAnimBPParam::get_AnimBlueprintClass() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::InterpTrackFloatAnimBPParam::get_AnimClass() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::InterpTrackFloatAnimBPParam::get_ParamName() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackFloatAnimBPParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackFloatAnimBPParam");
    return result;
}
