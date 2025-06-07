#include "..\FUObjectArray.hpp"
#include "INT_BuddyDroid_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_Interfaces_INT_BuddyDroid::INT_BuddyDroid_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/Interfaces/INT_BuddyDroid.INT_BuddyDroid_C");
    return result;
}
void _Game_Characters_BuddyDroid_01_Logic_Interfaces_INT_BuddyDroid::INT_BuddyDroid_C::GetBD1SkeletalMesh(_Script_Engine::SkeletalMeshComponent*& SkelMeshComponent) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_Interfaces_INT_BuddyDroid::INT_BuddyDroid_C::SetHealingState(bool bIsHealing) {
    return;
}
