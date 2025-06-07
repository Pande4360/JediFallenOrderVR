#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "NiagaraComponent.hpp"
#include "NiagaraFunctionLibrary.hpp"
#include "NiagaraParameterCollection.hpp"
#include "NiagaraParameterCollectionInstance.hpp"
#include "NiagaraSystem.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraFunctionLibrary");
    return result;
}
_Script_Niagara::NiagaraComponent* _Script_Niagara::NiagaraFunctionLibrary::SpawnSystemAttached(_Script_Niagara::NiagaraSystem* SystemTemplate, _Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, void* LocationType, bool bAutoDestroy) {
    return;
}
_Script_Niagara::NiagaraParameterCollectionInstance* _Script_Niagara::NiagaraFunctionLibrary::GetNiagaraParameterCollection(_Script_CoreUObject::Object* WorldContextObject, _Script_Niagara::NiagaraParameterCollection* Collection) {
    return;
}
_Script_Niagara::NiagaraComponent* _Script_Niagara::NiagaraFunctionLibrary::SpawnSystemAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Niagara::NiagaraSystem* SystemTemplate, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool bAutoDestroy) {
    return;
}
