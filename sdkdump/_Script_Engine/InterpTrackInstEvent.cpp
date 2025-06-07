#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstEvent.hpp"
float& _Script_Engine::InterpTrackInstEvent::get_LastUpdatePosition() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstEvent");
    return result;
}
