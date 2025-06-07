#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "SwRopePinComponent.hpp"
float& _Script_SwGame::SwRopePinComponent::get_PinLength() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
bool _Script_SwGame::SwRopePinComponent::get_bUsePinLength() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cc + 0)) & 1 != 0;
}
void _Script_SwGame::SwRopePinComponent::set_bUsePinLength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwRopePinComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwRopePinComponent");
    return result;
}
