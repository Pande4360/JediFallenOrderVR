#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameTeleportTypeTuple.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::FrameTeleportTypeTuple::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.FrameTeleportTypeTuple");
    return result;
}
int32_t& _Script_MovieSceneTracks::FrameTeleportTypeTuple::get_FrameNumber() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::FrameTeleportTypeTuple::get_TeleportType() {
    return (void*)((uintptr_t)this + 0x4);
}
