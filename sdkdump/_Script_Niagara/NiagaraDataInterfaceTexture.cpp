#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceTexture.hpp"
_Script_Engine::Texture*& _Script_Niagara::NiagaraDataInterfaceTexture::get_Texture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceTexture");
    return result;
}
