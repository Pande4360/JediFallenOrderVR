#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstVisibility.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstVisibility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstVisibility");
    return result;
}
float& _Script_Engine::InterpTrackInstVisibility::get_LastUpdatePosition() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::InterpTrackInstVisibility::get_Action() {
    return (void*)((uintptr_t)this + 0x28);
}
