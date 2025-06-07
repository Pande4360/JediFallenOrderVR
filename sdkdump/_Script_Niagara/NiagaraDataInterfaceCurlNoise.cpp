#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceCurlNoise.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceCurlNoise::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceCurlNoise");
    return result;
}
void* _Script_Niagara::NiagaraDataInterfaceCurlNoise::get_Seed() {
    return (void*)((uintptr_t)this + 0x2c);
}
