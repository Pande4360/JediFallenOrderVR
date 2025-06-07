#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "ImageWriteBlueprintLibrary.hpp"
#include "ImageWriteOptions.hpp"
void _Script_ImageWriteQueue::ImageWriteBlueprintLibrary::ExportToDisk(_Script_Engine::Texture* Texture, void* Filename, _Script_ImageWriteQueue::ImageWriteOptions& Options) {
    return;
}
_Script_CoreUObject::Class* _Script_ImageWriteQueue::ImageWriteBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary");
    return result;
}
