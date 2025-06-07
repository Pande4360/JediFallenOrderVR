#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\VectorField.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceVectorField.hpp"
void _Script_Niagara::NiagaraDataInterfaceVectorField::set_bTileZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraDataInterfaceVectorField::set_bTileY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraDataInterfaceVectorField::set_bTileX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDataInterfaceVectorField::get_bTileX() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_Engine::VectorField*& _Script_Niagara::NiagaraDataInterfaceVectorField::get_Field() {
    return *(_Script_Engine::VectorField**)((uintptr_t)this + 0x28);
}
bool _Script_Niagara::NiagaraDataInterfaceVectorField::get_bTileZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraDataInterfaceVectorField::get_bTileY() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceVectorField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceVectorField");
    return result;
}
