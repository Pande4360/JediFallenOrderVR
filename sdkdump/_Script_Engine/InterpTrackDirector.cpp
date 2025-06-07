#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrack.hpp"
#include "InterpTrackDirector.hpp"
void* _Script_Engine::InterpTrackDirector::get_CutTrack() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::InterpTrackDirector::get_bSimulateCameraCutsOnClients() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::InterpTrackDirector::set_bSimulateCameraCutsOnClients(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackDirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackDirector");
    return result;
}
