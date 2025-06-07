#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackColorProp.hpp"
#include "InterpTrackVectorBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackColorProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackColorProp");
    return result;
}
void* _Script_Engine::InterpTrackColorProp::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x90);
}
