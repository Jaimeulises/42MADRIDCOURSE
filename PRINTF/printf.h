

//CORECCION

/*Preliminares
Si hay sospechas de un caso de trampas, se para la evaluación. Para ello, utilice el flag "Cheat". Utilícelo con calma, precaución y discernimiento.

Pruebas preliminares
Compruebe los siguientes elementos:
- Se respetan las condiciones de acceso a la evaluación (evaluado presente, una
entrega vacía, un caso de trampas, etc.).
- Si no funciona algún elemento de la corrección, se termina la evaluación y tendrá que poner un 0.
- Tiene que clonar el repositorio sobre el ordenador del evaluado.
Instrucciones generales
Instrucciones generales
- Compruebe que los archivos necesarios para la configuración de su aplicación se encuentran todos en un directorio srcs.
- Compruebe que el setup.sh se encuentra en la raíz del repositorio.
- Ejecute el archivo "setup.sh"
Parte obligatoria
El proyecto consiste en clusterizar una aplicación y deployearla utilizando Kubernetes. Asegúrese de que se respetan los siguientes aspectos. En cuanto vea un error, pare la corrección y ponga un 0.

Entorno de servicios
- Compruebe que todos los contenedores han sido deployeados solamente con el script "setup.sh".
- Compruebe en el dashboard que el evaluado tenga los siguientes contenedores.
nginx, ftps, wordpress, mysql, grafana, influxDB.
Estos contenedores deben llevar el mismo nombre que el servicio al que van asociados. Si no es así o si falta alguno, se para la evaluación.
- Compruebe que todo los contenedores esten creados con Alpine Linux. Si no se para la evaluación.
- Compruebe que todo los contenedores tengan su propio Dockerfile, construido usando "setup.sh". \\
El evaluado debe construir él mismo las imagenes que usa. Esta prohibido usar imágenes ya construidas o sacarlas de DockerHub.

Si falta un Dockerfile, o si un Dockerfile no empieza por "FROM: alpine" o cualquier otra imagén local, se para la evaluación.
Exponlo!
- Verifique que las redirecciones a tus servicios están hechas con un Load Balancer.
Para ello, utiliza "kubectl get services":
ftps, grafana, nginx y wordpress deben ser tipo "LoadBalancer" y el campo EXTERNAL-IP no puede ser 127.0.0.1 o terminar con un .0 o .255.
influxdb y mysql deben ser tipo "ClusterIP".
Otras entradas pueden aparecer, pero ninguna debe ser tipo "NodePort".
Cada EXTERNAL-IP debe ser única.
También, verifique que el script "setup.sh" no usa ningún comando "kubectl port-forward".
Nginx
- Intente acceder al puerto http (80) y verifique que es automáticamente redirigido al puerto https (443).
Después, ejecute el comando "curl -I http://IP" y verifique que el código de retorno es un
"301 Moved Permanently" y la línea "Location" es la misma IP pero en https.
La página mostrada no importa, mientras no sea un error web (404, 503, etc).
los certificados SSL no son facilmente reconocidos, los errores de certificado en https son normales.
Si alguno de los puntos previamente mencionados no coincide con lo observado, la corrección se detiene.
Servidor FTP(S)
- Verifique el servidor FTPS escucha en el puerto 21. Verifique que es un servidor FTPS (s de seguro)
y no un servidor FTP básico.
Si el servidor FTPS no funciona como debería, la corrección se termina aquí.
- Compruebe que se puede subir y bajar ficheros sin errores.
Hola Word(Press), MySQL y PhpMyAdmin
- Verifique que la página de WordPress utiliza el puerto 5050 de su IP. Conéctese a el utilizando la cuenta de administrador,
verifique si hay varios usuarios presentes, después, deje un comentario en un post. Verifique que su comentario se añade a la base de datos.
Para ellos, puede acceder a la interfaz de PhpMyAdmin, que debe utilizar el puerto 5000 de su IP y verifique la base de datos (tabla "wp_comments").
La base de datos debe persistir en caso de fallo técnico.
Para probar esto, puede borrar el container MySQL con el dashboard de Kubernetes.
No debe recrearse automáticamente, después verifique si su comentario está todavía en la base de datos.
Si algo no funciona como es debido, se para la corrección.
Grafana e InfluxDB
- Verifique que Grafana utiliza el puerto 3000 de su IP. Conéctese a la interfaz.
Debe verificar si Grafana monitorea todos los containers. Para ello, busque la lista de containers en el dashboard,
y haga click en todos los containers uno por uno.
Al igual que la base de datos MySQL, tras borrar el container de InfluxDB, verifique si los datos previamente guardados siguen estando presentes en Grafana.
Si algo no funciona como es debido, se para la corrección.
Hola SSH
- Compruebe que tiene acceso SSH al servidor Nginx con la misma IP con http y https.
En caso negativo, se para la corrección.
Persistencia !
- Verifique en el caso de crash/cierre de uno de los servicios, los containers asociados se reinician correctamente.
Para ello, utilice "kubectl exec deploy/SERVICE -- pkill APP" (reemplazando SERVICE y APP, evidentemente).
Detenga los containers web (normalmente nginx o php-fpm APP) y detenga la APP grafana para este mismo container.
Detenga el servidor ftps (normalmente vsftpd APP).
Detenga mysqld y influxd APP para las bases de datos correspondientes (verifique si los datos persisten).
Detenga el servidor ssh en el container Nginx (sshd APP).
Si el container no se ha reiniciado tras varios minutos, si los datos de MySQL o InfluxDB se han perdido
o si un servicio no se ha reiniciado correctamente (especialmente ftps), se para la corrección.
*/