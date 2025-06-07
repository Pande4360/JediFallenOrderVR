#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScene3DConstraintSection.hpp"
void* _Script_MovieSceneTracks::MovieScene3DConstraintSection::get_constraintID() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MovieSceneTracks::MovieScene3DConstraintSection::get_ConstraintBindingID() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DConstraintSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DConstraintSection");
    return result;
}
