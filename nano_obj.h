/*
	Copyright 2015 Sebastian Viklund
	Licenced under the zlib licence
*/

#pragma once

#include <istream>
#include <vector>

namespace obj
{
	struct mesh
	{
		struct vertex { float x = 0.0f, y = 0.0f, z = 0.0f; };
		struct texcoord { float s = 0.0f, t = 0.0f; };
		struct normal { float x = 0.0f, y = 0.0f, z = 0.0f; };

		struct face
		{
			struct vertex { int v = -1, vt = -1, vn = -1; };
			std::vector<vertex> vertices;
		};

		std::vector<vertex> vertices;
		std::vector<texcoord> texcoords;
		std::vector<normal> normals;
		std::vector<face> faces;
	};

	void read(mesh& m, const char* filename);
}
