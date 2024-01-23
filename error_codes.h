SQLITE_MODERN_CPP_ERROR_CODE(ERROR,error,)
SQLITE_MODERN_CPP_ERROR_CODE(INTERNAL,internal,)
SQLITE_MODERN_CPP_ERROR_CODE(PERM,perm,)
SQLITE_MODERN_CPP_ERROR_CODE(ABORT,abort,
* SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(ABORT,ROLLBACK,abort,rollback)
)
SQLITE_MODERN_CPP_ERROR_CODE(BUSY,busy,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(BUSY,RECOVERY,busy,recovery)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(BUSY,SNAPSHOT,busy,snapshot)
)
SQLITE_MODERN_CPP_ERROR_CODE(LOCKED,locked,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(LOCKED,SHAREDCACHE,locked,sharedcache)
)
SQLITE_MODERN_CPP_ERROR_CODE(NOMEM,nomem,)
SQLITE_MODERN_CPP_ERROR_CODE(READONLY,readonly,)
SQLITE_MODERN_CPP_ERROR_CODE(INTERRUPT,interrupt,)
SQLITE_MODERN_CPP_ERROR_CODE(IOERR,ioerr,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,READ,ioerr,read)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,SHORT_READ,ioerr,short_read)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,WRITE,ioerr,write)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,FSYNC,ioerr,fsync)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,DIR_FSYNC,ioerr,dir_fsync)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,TRUNCATE,ioerr,truncate)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,FSTAT,ioerr,fstat)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,UNLOCK,ioerr,unlock)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,RDLOCK,ioerr,rdlock)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,DELETE,ioerr,delete)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,BLOCKED,ioerr,blocked)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,NOMEM,ioerr,nomem)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,ACCESS,ioerr,access)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,CHECKRESERVEDLOCK,ioerr,checkreservedlock)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,LOCK,ioerr,lock)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,CLOSE,ioerr,close)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,DIR_CLOSE,ioerr,dir_close)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,SHMOPEN,ioerr,shmopen)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,SHMSIZE,ioerr,shmsize)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,SHMLOCK,ioerr,shmlock)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,SHMMAP,ioerr,shmmap)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,SEEK,ioerr,seek)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,DELETE_NOENT,ioerr,delete_noent)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,MMAP,ioerr,mmap)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,GETTEMPPATH,ioerr,gettemppath)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,CONVPATH,ioerr,convpath)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,VNODE,ioerr,vnode)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(IOERR,AUTH,ioerr,auth)
)
SQLITE_MODERN_CPP_ERROR_CODE(CORRUPT,corrupt,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CORRUPT,VTAB,corrupt,vtab)
)
SQLITE_MODERN_CPP_ERROR_CODE(NOTFOUND,notfound,)
SQLITE_MODERN_CPP_ERROR_CODE(FULL,full,)
SQLITE_MODERN_CPP_ERROR_CODE(CANTOPEN,cantopen,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CANTOPEN,NOTEMPDIR,cantopen,notempdir)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CANTOPEN,ISDIR,cantopen,isdir)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CANTOPEN,FULLPATH,cantopen,fullpath)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CANTOPEN,CONVPATH,cantopen,convpath)
)
SQLITE_MODERN_CPP_ERROR_CODE(PROTOCOL,protocol,)
SQLITE_MODERN_CPP_ERROR_CODE(EMPTY,empty,)
SQLITE_MODERN_CPP_ERROR_CODE(SCHEMA,schema,)
SQLITE_MODERN_CPP_ERROR_CODE(TOOBIG,toobig,)
SQLITE_MODERN_CPP_ERROR_CODE(CONSTRAINT,constraint,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,CHECK,constraint,check)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,COMMITHOOK,constraint,commithook)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,FOREIGNKEY,constraint,foreignkey)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,FUNCTION,constraint,function)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,NOTNULL,constraint,notnull)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,PRIMARYKEY,constraint,primarykey)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,TRIGGER,constraint,trigger)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,UNIQUE,constraint,unique)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,VTAB,constraint,vtab)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(CONSTRAINT,ROWID,constraint,rowid)
)
SQLITE_MODERN_CPP_ERROR_CODE(MISMATCH,mismatch,)
SQLITE_MODERN_CPP_ERROR_CODE(MISUSE,misuse,)
SQLITE_MODERN_CPP_ERROR_CODE(NOLFS,nolfs,)
SQLITE_MODERN_CPP_ERROR_CODE(AUTH,auth,
)
SQLITE_MODERN_CPP_ERROR_CODE(FORMAT,format,)
SQLITE_MODERN_CPP_ERROR_CODE(RANGE,range,)
SQLITE_MODERN_CPP_ERROR_CODE(NOTADB,notadb,)
SQLITE_MODERN_CPP_ERROR_CODE(NOTICE,notice,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(NOTICE,RECOVER_WAL,notice,recover_wal)
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(NOTICE,RECOVER_ROLLBACK,notice,recover_rollback)
)
SQLITE_MODERN_CPP_ERROR_CODE(WARNING,warning,
  SQLITE_MODERN_CPP_ERROR_CODE_EXTENDED(WARNING,AUTOINDEX,warning,autoindex)
)
 