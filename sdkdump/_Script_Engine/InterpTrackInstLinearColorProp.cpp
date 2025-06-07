#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInstLinearColorProp.hpp"
#include "InterpTrackInstProperty.hpp"
void* _Script_Engine::InterpTrackInstLinearColorProp::get_ResetColor() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstLinearColorProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstLinearColorProp");
    return result;
}
