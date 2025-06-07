#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_ImageWriteQueue {
struct ImageWriteOptions;
}
namespace _Script_ImageWriteQueue {
#pragma pack(push, 1)
struct ImageWriteBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ExportToDisk(_Script_Engine::Texture* Texture, void* Filename, _Script_ImageWriteQueue::ImageWriteOptions& Options);
}; // Size: 0x28
#pragma pack(pop)
}
