#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DirectorTrackCut.hpp"
float& _Script_Engine::DirectorTrackCut::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::DirectorTrackCut::get_TransitionTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::DirectorTrackCut::get_TargetCamGroup() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::DirectorTrackCut::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DirectorTrackCut");
    return result;
}
int32_t& _Script_Engine::DirectorTrackCut::get_ShotNumber() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
