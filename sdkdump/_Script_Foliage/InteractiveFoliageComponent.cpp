#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "InteractiveFoliageComponent.hpp"
_Script_CoreUObject::Class* _Script_Foliage::InteractiveFoliageComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.InteractiveFoliageComponent");
    return result;
}
