#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFloatBase.hpp"
#include "InterpTrackMoveAxis.hpp"
void* _Script_Engine::InterpTrackMoveAxis::get_MoveAxis() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackMoveAxis::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackMoveAxis");
    return result;
}
void* _Script_Engine::InterpTrackMoveAxis::get_LookupTrack() {
    return (void*)((uintptr_t)this + 0x98);
}
