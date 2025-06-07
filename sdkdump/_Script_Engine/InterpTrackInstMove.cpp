#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstMove.hpp"
void* _Script_Engine::InterpTrackInstMove::get_ResetLocation() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::InterpTrackInstMove::get_ResetRotation() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstMove::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstMove");
    return result;
}
