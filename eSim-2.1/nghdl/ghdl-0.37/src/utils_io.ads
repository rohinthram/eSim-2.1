--  Common IO utilities.
--  Copyright (C) 2019 Tristan Gingold
--
--  GHDL is free software; you can redistribute it and/or modify it under
--  the terms of the GNU General Public License as published by the Free
--  Software Foundation; either version 2, or (at your option) any later
--  version.
--
--  GHDL is distributed in the hope that it will be useful, but WITHOUT ANY
--  WARRANTY; without even the implied warranty of MERCHANTABILITY or
--  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
--  for more details.
--
--  You should have received a copy of the GNU General Public License
--  along with GHDL; see the file COPYING.  If not, write to the Free
--  Software Foundation, 59 Temple Place - Suite 330, Boston, MA
--  02111-1307, USA.

with Types; use Types;

package Utils_IO is
   --  Disp 2*INDENT spaces.
   procedure Put_Indent (Indent : Natural);

   --  Like Put, but without the leading space (if any).
   procedure Put_Trim (S : String);

   --  Put without leading blank.
   procedure Put_Uns32 (V : Uns32);
   procedure Put_Int32 (V : Int32);
   procedure Put_Int64 (V : Int64);
end Utils_IO;